/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PPMockRTAddress, PPMockRTLocation;

@interface PPMockRTMapItem : NSObject {

	NSString* _name;
	PPMockRTAddress* _address;
	PPMockRTLocation* _location;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) PPMockRTAddress * address;                //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) PPMockRTLocation * location;              //@synthesize location=_location - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(PPMockRTAddress *)address;
-(PPMockRTLocation *)location;
-(void)setLocation:(PPMockRTLocation *)arg1 ;
-(void)setAddress:(PPMockRTAddress *)arg1 ;
@end
