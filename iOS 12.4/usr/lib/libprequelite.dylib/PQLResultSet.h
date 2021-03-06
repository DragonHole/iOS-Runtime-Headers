/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
#import <libobjc.A.dylib/PQLEnumeration.h>

@class PQLStatement, NSSet, NSError, PQLConnection;

@interface PQLResultSet : NSObject <PQLEnumeration> {

	PQLStatement* _stmt;
	Class _objectsClass;
	SEL _objectsClassInitializer;
	BOOL _hasValuable;
	/*^block*/id _objectsConstructor;
	id _lastEnumeratedObject;
	BOOL _inTransaction;
	NSSet* _defaultUnarchivingAllowedClasses;
	NSError* _error;
	unsigned long long _rowNumber;
	unsigned long long _columns;
	PQLConnection* _db;

}

@property (nonatomic,readonly) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long rowNumber;                        //@synthesize rowNumber=_rowNumber - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;                          //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) PQLConnection * db;                                  //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef stmt; 
@property (nonatomic,retain) NSSet * defaultUnarchivingAllowedClasses;              //@synthesize defaultUnarchivingAllowedClasses=_defaultUnarchivingAllowedClasses - In the implementation block
-(id)dataAtIndex:(int)arg1 ;
-(id)columnNameAtIndex:(int)arg1 ;
-(sqlite3_stmtRef)stmt;
-(id)objectOfClass:(Class)arg1 ;
-(BOOL)next;
-(BOOL)_next:(BOOL)arg1 ;
-(PQLResultSet*)enumerateObjects:(/*^block*/id)arg1 ;
-(id)initWithStatement:(id)arg1 usingDatabase:(id)arg2 ;
-(id)onlyObjectOfClass:(Class)arg1 initializer:(SEL)arg2 ;
-(id)onlyObject:(/*^block*/id)arg1 ;
-(BOOL)isNullAtIndex:(int)arg1 ;
-(NSSet *)defaultUnarchivingAllowedClasses;
-(id)onlyObjectOfClass:(Class)arg1 ;
-(id)objectOfClass:(Class)arg1 initializer:(SEL)arg2 ;
-(sqlite3_valueRef)sqliteValueAtIndex:(int)arg1 ;
-(unsigned char)unsignedCharAtIndex:(int)arg1 ;
-(short)shortAtIndex:(int)arg1 ;
-(unsigned short)unsignedShortAtIndex:(int)arg1 ;
-(const char*)UTF8StringAtIndex:(int)arg1 ;
-(id)dataAtIndex:(int)arg1 noCopy:(BOOL)arg2 ;
-(id)plistAtIndex:(int)arg1 ;
-(id)archivedObjectOfClass:(Class)arg1 atIndex:(int)arg2 ;
-(id)archivedObjectOfClasses:(id)arg1 atIndex:(int)arg2 ;
-(PQLResultSet*)enumerateObjectsOfClass:(Class)arg1 initializer:(SEL)arg2 ;
-(void)setDefaultUnarchivingAllowedClasses:(NSSet *)arg1 ;
-(unsigned long long)columns;
-(id)dateAtIndex:(int)arg1 ;
-(id)numberAtIndex:(int)arg1 ;
-(id)unarchivedObjectOfClasses:(id)arg1 atIndex:(int)arg2 ;
-(unsigned)unsignedIntAtIndex:(int)arg1 ;
-(unsigned long long)unsignedLongLongAtIndex:(int)arg1 ;
-(id)unarchivedObjectOfClass:(Class)arg1 atIndex:(int)arg2 ;
-(long long)longAtIndex:(int)arg1 ;
-(id)objectOfClass:(Class)arg1 atIndex:(int)arg2 ;
-(long long)longLongAtIndex:(int)arg1 ;
-(unsigned long long)unsignedLongAtIndex:(int)arg1 ;
-(long long)integerAtIndex:(int)arg1 ;
-(id)object:(/*^block*/id)arg1 ;
-(id)uuidAtIndex:(int)arg1 ;
-(unsigned long long)unsignedIntegerAtIndex:(int)arg1 ;
-(PQLResultSet*)enumerateObjectsOfClass:(Class)arg1 ;
-(char)charAtIndex:(int)arg1 ;
-(PQLConnection *)db;
-(BOOL)boolAtIndex:(int)arg1 ;
-(float)floatAtIndex:(int)arg1 ;
-(double)doubleAtIndex:(int)arg1 ;
-(unsigned long long)rowNumber;
-(int)intAtIndex:(int)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PQ4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)description;
-(id)objectAtIndex:(int)arg1 ;
-(id)nextObject;
-(void)close;
-(id)stringAtIndex:(int)arg1 ;
-(NSError *)error;
@end

