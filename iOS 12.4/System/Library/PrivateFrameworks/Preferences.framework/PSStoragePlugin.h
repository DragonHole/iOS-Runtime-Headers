/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PSStoragePlugin : NSObject {

	NSString* _identifier;
	NSArray* _tips;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * tips;                     //@synthesize tips=_tips - In the implementation block
-(NSArray *)tips;
-(void)notifyUsageChanged;
-(void)reloadTips;
-(id)documentAppIdentifiers;
-(id)documentSpecifiersForApp:(id)arg1 ;
-(id)externDataSizeAppIdentifiers;
-(long long)externDataSizeForApp:(id)arg1 ;
-(void)setTips:(NSArray *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
@end
