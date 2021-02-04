/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (copy,readonly) NSPointerFunctions * keyPointerFunctions; 
@property (copy,readonly) NSPointerFunctions * valuePointerFunctions; 
@property (readonly) unsigned long long count; 
+(id)mapTableWithWeakToStrongObjects;
+(id)mapTableWithStrongToWeakObjects;
+(id)mapTableWithWeakToWeakObjects;
+(id)mapTableWithStrongToStrongObjects;
+(id)alloc;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)strongToStrongObjectsMapTable;
+(id)strongToWeakObjectsMapTable;
+(id)weakToStrongObjectsMapTable;
+(id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 ;
+(id)weakToWeakObjectsMapTable;
-(id)enumerator;
-(unsigned long long)__capacity;
-(NSPointerFunctions *)keyPointerFunctions;
-(NSPointerFunctions *)valuePointerFunctions;
-(void)setItem:(const void*)arg1 forKey:(const void*)arg2 ;
-(void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2 ;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(id)mutableDictionary;
-(void)removeAllItems;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allValues;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copy;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)allKeys;
-(id)keyEnumerator;
-(id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3 ;
-(id)dictionaryRepresentation;
@end
