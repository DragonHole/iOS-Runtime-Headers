/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACCachedPreferences : NSObject {

	BOOL _siriIsEnabled;
	BOOL _siriIsRestricted;
	BOOL _siriIsSupported;

}
+(id)sharedInstance;
-(BOOL)siriIsEnabled;
-(BOOL)siriIsRestricted;
-(void)_updateSiriIsRestricted;
-(void)_updateSiriIsEnabled;
-(void)_updateSiriIsSupported;
-(BOOL)siriIsSupported;
-(id)init;
-(void)dealloc;
@end

