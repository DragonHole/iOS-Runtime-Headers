/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface MPVolumeHUDController : NSObject {

	NSMutableSet* _displays;
	NSMutableSet* _categories;
	BOOL _needsUpdate;

}

@property (nonatomic,readonly) id mainContext; 
+(id)sharedInstance;
-(void)addVolumeDisplay:(id)arg1 ;
-(void)removeVolumeDisplay:(id)arg1 ;
-(void)_addCategory:(id)arg1 ;
-(void)_updateVisibility;
-(void)registerView:(id)arg1 inContext:(id)arg2 ;
-(void)unregisterView:(id)arg1 inContext:(id)arg2 ;
-(id)init;
-(void)setNeedsUpdate;
-(id)mainContext;
@end

