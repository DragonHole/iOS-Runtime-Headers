/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;
@interface WeatherInternalPreferences : NSUserDefaults {

	id<WeatherPreferencesPersistence> _persistence;

}

@property (retain) id<WeatherPreferencesPersistence> persistence;              //@synthesize persistence=_persistence - In the implementation block
@property (readonly) BOOL isInternalInstall; 
+(id)sharedInternalPreferences;
-(BOOL)isInternalInstall;
-(id<WeatherPreferencesPersistence>)persistence;
-(void)setPersistence:(id<WeatherPreferencesPersistence>)arg1 ;
@end

