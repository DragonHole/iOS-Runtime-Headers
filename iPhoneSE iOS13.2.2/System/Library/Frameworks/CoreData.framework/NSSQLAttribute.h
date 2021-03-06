/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSSet;

@interface NSSQLAttribute : NSSQLColumn

@property (nonatomic,readonly) NSSet * triggerKeys; 
-(void)dealloc;
-(BOOL)isFileBackedFuture;
-(id)attributeDescription;
-(void)_setIsBackedByTrigger:(BOOL)arg1 ;
-(void)addKeyForTriggerOnRelationship:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(unsigned char)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(NSSet *)triggerKeys;
-(id)initForReadOnlyFetchWithExpression:(id)arg1 ;
-(BOOL)shouldIndex;
-(BOOL)isDerivedAttribute;
-(BOOL)isBackedByTrigger;
@end

