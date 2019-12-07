/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HIDDisplayPresetInterface, NSData;

@interface HIDDisplayPresetData : NSObject {

	long long _index;
	HIDDisplayPresetInterface* _deviceRef;

}

@property (readonly) BOOL valid; 
@property (readonly) BOOL writable; 
@property (readonly) NSData * uniqueID; 
-(NSData *)uniqueID;
-(BOOL)valid;
-(BOOL)writable;
-(id)get:(id*)arg1 ;
-(id)initWithDisplayDevice:(id)arg1 index:(long long)arg2 ;
-(void)setHidDisplay:(id)arg1 ;
-(id)hidDisplay;
-(BOOL)set:(id)arg1 error:(id*)arg2 ;
@end
