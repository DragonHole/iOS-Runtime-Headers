/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAHLWorkoutType : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * swimmingLocationType; 
@property (nonatomic,copy) NSString * workoutCategory; 
@property (nonatomic,copy) NSString * workoutLocationType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workoutTypeWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)workoutType;
-(void)setWorkoutLocationType:(NSString *)arg1 ;
-(NSString *)workoutLocationType;
-(id)encodedClassName;
-(NSString *)workoutCategory;
-(void)setWorkoutCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)swimmingLocationType;
-(void)setSwimmingLocationType:(NSString *)arg1 ;
@end

