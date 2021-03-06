/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSIndexSet;

@interface ATXDisplayCacheIntermediateFormat : NSObject {

	NSArray* _actions;
	NSArray* _predictionChunks;
	NSIndexSet* _lockscreenPredictionIndices;

}

@property (nonatomic,readonly) NSArray * actions;                                     //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSArray * predictionChunks;                            //@synthesize predictionChunks=_predictionChunks - In the implementation block
@property (nonatomic,readonly) NSIndexSet * lockscreenPredictionIndices;              //@synthesize lockscreenPredictionIndices=_lockscreenPredictionIndices - In the implementation block
+(id)fromActions:(id)arg1 ;
-(NSArray *)actions;
-(NSIndexSet *)lockscreenPredictionIndices;
-(NSArray *)predictionChunks;
@end

