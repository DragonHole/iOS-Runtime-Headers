/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, SALocation, NSString, NSNumber;

@interface SALocalSearchVehicleEvent : SADomainObject

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSNumber * userSetLocation; 
@property (nonatomic,copy) NSString * vehicleIdentifier; 
+(id)vehicleEvent;
+(id)vehicleEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)vehicleIdentifier;
-(id)encodedClassName;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)userSetLocation;
-(void)setUserSetLocation:(NSNumber *)arg1 ;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
@end

