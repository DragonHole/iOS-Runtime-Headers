/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
-(NSDate *)date;
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
-(NSString *)vehicleIdentifier;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)userSetLocation;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
-(void)setUserSetLocation:(NSNumber *)arg1 ;
@end

