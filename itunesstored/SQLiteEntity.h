/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SQLiteEntity.h"
#import "NSObject.h"
#import "SQLiteEntity.h"

@class ISSQLiteDatabase;

@protocol SQLiteEntity <NSObject>
+(id)databasePropertyToSetClientProperty:(id)setClientProperty;
+(id)databasePropertyToGetClientProperty:(id)getClientProperty;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)setClientDictionary;
+(id)disambiguatedSQLForProperty:(id)property;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)table;
+(id)foreignDatabaseTableForProperty:(id)property;
+(id)foreignDatabaseColumnForProperty:(id)property;
+(id)joinClauseForProperty:(id)property;
+(id)databaseTable;
+(id)databaseValueForProperty:(id)property clientValue:(id)value;
-(BOOL)deleteFromDatabase;
-(id)valueForExternalProperty:(id)externalProperty;
-(void)setExternalValuesWithDictionary:(id)dictionary;
-(BOOL)setValuesWithDictionary:(id)dictionary;
-(BOOL)setValue:(id)value forProperty:(id)property;
-(void)getValues:(id*)values forProperties:(id*)properties count:(unsigned)count;
-(id)valueForProperty:(id)property;
@end

__attribute__((visibility("hidden")))
@interface SQLiteEntity : NSObject <SQLiteEntity> {
	ISSQLiteDatabase* _database;
	long long _persistentID;
}
@property(readonly, assign, nonatomic) BOOL existsInDatabase;
@property(readonly, assign, nonatomic) long long persistentID;
@property(readonly, assign, nonatomic) ISSQLiteDatabase* database;
+(BOOL)_insertValues:(id)values intoTable:(id)table withPersistentID:(long long)persistentID database:(id)database;
+(id)joinClauseForProperty:(id)property;
+(id)foreignKeyColumnForTable:(id)table;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignDatabaseTableForProperty:(id)property;
+(id)foreignDatabaseColumnForProperty:(id)property;
+(id)disambiguatedSQLForProperty:(id)property;
+(id)databaseTable;
+(id)databaseValueForProperty:(id)property clientValue:(id)value;
+(id)databasePropertyToSetClientProperty:(id)setClientProperty;
+(id)databasePropertyToGetClientProperty:(id)getClientProperty;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)setClientDictionary;
-(BOOL)_deleteRowFromTable:(id)table usingColumn:(id)column;
-(id)_copyTableClusteredValuesWithValues:(id)values;
-(id)valueForProperty:(id)property;
-(id)valueForExternalProperty:(id)externalProperty;
-(BOOL)setValuesWithDictionary:(id)dictionary;
-(BOOL)setValue:(id)value forProperty:(id)property;
-(void)setExternalValuesWithDictionary:(id)dictionary;
-(void)getValues:(id*)values forProperties:(id*)properties count:(unsigned)count;
-(BOOL)deleteFromDatabase;
-(id)initWithPropertyValues:(id)propertyValues inDatabase:(id)database;
-(id)initWithPersistentID:(long long)persistentID inDatabase:(id)database;
@end

@interface SQLiteEntity (SQLiteQueryAdditions)
+(id)queryWithDatabase:(id)database predicate:(id)predicate orderingProperties:(id)properties;
+(id)queryWithDatabase:(id)database predicate:(id)predicate;
+(id)minValueForProperty:(id)property predicate:(id)predicate database:(id)database;
+(id)maxValueForProperty:(id)property predicate:(id)predicate database:(id)database;
+(id)_aggregateValueForProperty:(id)property function:(id)function predicate:(id)predicate database:(id)database;
+(id)anyInDatabase:(id)database predicate:(id)predicate;
@end
