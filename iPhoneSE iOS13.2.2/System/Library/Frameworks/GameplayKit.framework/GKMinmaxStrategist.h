/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/GKStrategist.h>

@class NSString;

@interface GKMinmaxStrategist : NSObject <GKStrategist> {

	GKCMinmaxStrategist* _cppMinmax;

}

@property (assign,nonatomic) long long maxLookAheadDepth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<GKGameModel> gameModel; 
@property (nonatomic,retain) id<GKRandom> randomSource; 
-(id)init;
-(void)dealloc;
-(id<GKGameModel>)gameModel;
-(id)bestMoveForActivePlayer;
-(void)setGameModel:(id<GKGameModel>)arg1 ;
-(id<GKRandom>)randomSource;
-(void)setRandomSource:(id<GKRandom>)arg1 ;
-(long long)maxLookAheadDepth;
-(void)setMaxLookAheadDepth:(long long)arg1 ;
-(id)bestMoveForPlayer:(id)arg1 ;
-(id)randomMoveForPlayer:(id)arg1 fromNumberOfBestMoves:(long long)arg2 ;
@end
