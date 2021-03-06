/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSString;

@interface SALocalSearchVehicleEventCreate : SADomainCommand

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * notes; 
+(id)vehicleEventCreate;
+(id)vehicleEventCreateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
@end

