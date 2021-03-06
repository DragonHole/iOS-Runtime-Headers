/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString, NSData;


@protocol HMDSettingConstraintModelProtocol <HMDSettingModelBaseProtocol>
@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSData * dataValue; 
@required
-(NSNumber *)type;
-(void)setType:(id)arg1;
-(NSString *)stringValue;
-(void)setStringValue:(id)arg1;
-(void)setDataValue:(id)arg1;
-(NSData *)dataValue;
-(NSNumber *)numberValue;
-(void)setNumberValue:(id)arg1;

@end

