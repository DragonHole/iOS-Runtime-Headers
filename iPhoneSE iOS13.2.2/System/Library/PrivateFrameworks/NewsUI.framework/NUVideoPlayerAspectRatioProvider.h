/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@protocol SVVideoViewControllerProviding;
@class NSString;

@interface NUVideoPlayerAspectRatioProvider : NSObject <NUAdContextProvider> {

	id<SVVideoViewControllerProviding> _videoViewControllerProvider;

}

@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id)initWithVideoViewControllerProvider:(id)arg1 ;
-(id)adContextValueForKeyPath:(id)arg1 ;
@end
