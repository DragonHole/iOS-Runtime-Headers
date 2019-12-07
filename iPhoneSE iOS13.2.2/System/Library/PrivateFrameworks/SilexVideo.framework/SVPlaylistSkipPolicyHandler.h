/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoSkipPolicy.h>

@protocol SVContentTransitionTypeProviding;
@class NSString;

@interface SVPlaylistSkipPolicyHandler : NSObject <SVVideoSkipPolicy> {

	id<SVContentTransitionTypeProviding> _contentTransitionTypeProvider;

}

@property (nonatomic,readonly) id<SVContentTransitionTypeProviding> contentTransitionTypeProvider;              //@synthesize contentTransitionTypeProvider=_contentTransitionTypeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canSkip; 
-(BOOL)canSkip;
-(id<SVContentTransitionTypeProviding>)contentTransitionTypeProvider;
-(id)initWithContentTransitionTypeProvider:(id)arg1 ;
@end
