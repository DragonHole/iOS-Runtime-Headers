/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation {

	NSString* _badgeValue;
	NSString* _bundleIdentifier;

}

@property (retain) NSString * badgeValue;                    //@synthesize badgeValue=_badgeValue - In the implementation block
@property (retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)uniqueKey;
-(NSString *)bundleIdentifier;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(void)run;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

