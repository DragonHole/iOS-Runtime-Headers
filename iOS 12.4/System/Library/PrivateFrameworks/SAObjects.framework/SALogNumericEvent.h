/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SALogNumericEvent : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * eventName; 
@property (nonatomic,copy) NSString * eventOperation; 
@property (nonatomic,copy) NSNumber * eventValue; 
+(id)logNumericEvent;
+(id)logNumericEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setEventValue:(NSNumber *)arg1 ;
-(void)setEventName:(NSString *)arg1 ;
-(NSNumber *)eventValue;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)eventOperation;
-(void)setEventOperation:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)eventName;
@end
