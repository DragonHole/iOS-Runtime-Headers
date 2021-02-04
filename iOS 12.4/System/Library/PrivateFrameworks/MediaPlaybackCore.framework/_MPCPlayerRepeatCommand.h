/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerRepeatCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerRepeatCommand : _MPCPlayerCommand <MPCPlayerRepeatCommand> {

	BOOL _supportsChangeRepeat;
	BOOL _supportsAdvanceRepeat;
	long long _currentRepeatType;
	NSArray* _supportedRepeatTypes;

}

@property (assign,nonatomic) long long currentRepeatType;                 //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
@property (nonatomic,retain) NSArray * supportedRepeatTypes;              //@synthesize supportedRepeatTypes=_supportedRepeatTypes - In the implementation block
@property (assign,nonatomic) BOOL supportsChangeRepeat;                   //@synthesize supportsChangeRepeat=_supportsChangeRepeat - In the implementation block
@property (assign,nonatomic) BOOL supportsAdvanceRepeat;                  //@synthesize supportsAdvanceRepeat=_supportsAdvanceRepeat - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)setRepeatType:(long long)arg1 ;
-(void)setCurrentRepeatType:(long long)arg1 ;
-(void)setSupportedRepeatTypes:(NSArray *)arg1 ;
-(long long)currentRepeatType;
-(void)setSupportsChangeRepeat:(BOOL)arg1 ;
-(void)setSupportsAdvanceRepeat:(BOOL)arg1 ;
-(BOOL)supportsChangeRepeat;
-(BOOL)supportsAdvanceRepeat;
-(NSArray *)supportedRepeatTypes;
-(id)advance;
@end
