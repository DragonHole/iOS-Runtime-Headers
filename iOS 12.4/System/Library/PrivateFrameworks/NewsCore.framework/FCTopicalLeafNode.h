/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCTopicalNode;

@interface FCTopicalLeafNode : NSObject {

	FCTopicalNode* _node;
	double _score;

}

@property (nonatomic,retain) FCTopicalNode * node;              //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) double score;                      //@synthesize score=_score - In the implementation block
-(void)setScore:(double)arg1 ;
-(double)score;
-(id)initWithNode:(id)arg1 score:(double)arg2 ;
-(FCTopicalNode *)node;
-(void)setNode:(FCTopicalNode *)arg1 ;
@end

