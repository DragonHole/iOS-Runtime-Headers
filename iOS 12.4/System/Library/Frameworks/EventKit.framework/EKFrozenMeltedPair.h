/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol EKFrozenMeltedPair <NSObject>
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
@required
+(Class)frozenClass;
+(Class)meltedClass;
-(EKPersistentObject*)frozenObject;
-(id)meltedObjectInStore:(id)arg1;
-(id)existingMeltedObject;
-(BOOL)isPropertyUnavailable:(id)arg1;
-(BOOL)isCompletelyEqual:(id)arg1;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2;
-(BOOL)isPartialObject;
-(NSString *)semanticIdentifier;
-(id)changeSet;
-(void)setValue:(id)arg1 forKey:(id)arg2;
-(id)valueForKey:(id)arg1;
-(NSString *)uniqueIdentifier;
-(id)initWithObject:(id)arg1;
-(BOOL)isFrozen;

@end
