/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerDisableModificationsCommand.h>

@class NSString;

@interface _MPCPlayerDisableModificationsCommand : _MPCPlayerCommand <MPCPlayerDisableModificationsCommand> {

	BOOL _disabled;
	BOOL _disable;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disable;                 //@synthesize disable=_disable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
-(BOOL)isDisabled;
-(BOOL)isDisabled;
-(void)setDisable:(BOOL)arg1 ;
-(id)setDisabled:(BOOL)arg1 ;
@end

