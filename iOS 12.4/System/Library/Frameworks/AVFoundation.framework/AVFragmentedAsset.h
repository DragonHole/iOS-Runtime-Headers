/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVURLAsset.h>
#import <AVFoundation/AVFragmentMinding.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding> {

	AVFragmentedAssetInternal* _fragmentedAsset;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
+(id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2 ;
-(BOOL)_mindsFragments;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(Class)_classForAssetTracks;
-(BOOL)isAssociatedWithFragmentMinder;
-(id)trackWithTrackID:(int)arg1 ;
-(NSArray *)tracks;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
@end

