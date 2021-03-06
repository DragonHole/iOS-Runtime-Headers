/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SVVideoViewControllerConfiguration.h>

@class NUVideoViewControllerAdConfiguration;

@interface NUVideoViewControllerConfiguration : NSObject <NSCopying, SVVideoViewControllerConfiguration> {

	BOOL _preferredMuteState;
	BOOL _pagingAllowed;
	BOOL _sharingEnabled;
	NUVideoViewControllerAdConfiguration* _adConfiguration;

}

@property (getter=isSharingEnabled,nonatomic,readonly) BOOL sharingEnabled;                              //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (nonatomic,copy,readonly) NUVideoViewControllerAdConfiguration * adConfiguration;              //@synthesize adConfiguration=_adConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL preferredMuteState;                                                  //@synthesize preferredMuteState=_preferredMuteState - In the implementation block
@property (getter=isPagingAllowed,nonatomic,readonly) BOOL pagingAllowed;                                //@synthesize pagingAllowed=_pagingAllowed - In the implementation block
-(BOOL)preferredMuteState;
-(BOOL)isPagingAllowed;
-(id)initWithSharingEnabled:(BOOL)arg1 preferredMuteState:(BOOL)arg2 pagingAllowed:(BOOL)arg3 adConfiguration:(id)arg4 ;
-(BOOL)isSharingEnabled;
-(NUVideoViewControllerAdConfiguration *)adConfiguration;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

