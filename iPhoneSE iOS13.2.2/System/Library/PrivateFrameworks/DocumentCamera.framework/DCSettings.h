/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface DCSettings : NSObject {

	NSUserDefaults* _userDefaults;

}

@property (retain) NSUserDefaults * userDefaults;                      //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) BOOL enableViewService; 
@property (nonatomic,readonly) BOOL finishAfterFirstScan; 
+(id)sharedSettings;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(BOOL)enableViewService;
-(BOOL)finishAfterFirstScan;
-(id)enableViewServiceBoxed;
-(void)setEnableViewServiceBoxed:(id)arg1 ;
-(id)finishAfterFirstScanBoxed;
-(void)setFinishAfterFirstScanBoxed:(id)arg1 ;
@end
