/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerShuffleCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerShuffleCommand : _MPCPlayerCommand <MPCPlayerShuffleCommand> {

	BOOL _supportsChangeShuffle;
	BOOL _supportsAdvanceShuffle;
	long long _currentShuffleType;
	NSArray* _supportedShuffleTypes;

}

@property (assign,nonatomic) long long currentShuffleType;                 //@synthesize currentShuffleType=_currentShuffleType - In the implementation block
@property (nonatomic,retain) NSArray * supportedShuffleTypes;              //@synthesize supportedShuffleTypes=_supportedShuffleTypes - In the implementation block
@property (assign,nonatomic) BOOL supportsChangeShuffle;                   //@synthesize supportsChangeShuffle=_supportsChangeShuffle - In the implementation block
@property (assign,nonatomic) BOOL supportsAdvanceShuffle;                  //@synthesize supportsAdvanceShuffle=_supportsAdvanceShuffle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)advance;
-(id)setShuffleType:(long long)arg1 ;
-(void)setCurrentShuffleType:(long long)arg1 ;
-(void)setSupportedShuffleTypes:(NSArray *)arg1 ;
-(long long)currentShuffleType;
-(void)setSupportsChangeShuffle:(BOOL)arg1 ;
-(void)setSupportsAdvanceShuffle:(BOOL)arg1 ;
-(BOOL)supportsChangeShuffle;
-(BOOL)supportsAdvanceShuffle;
-(NSArray *)supportedShuffleTypes;
@end
