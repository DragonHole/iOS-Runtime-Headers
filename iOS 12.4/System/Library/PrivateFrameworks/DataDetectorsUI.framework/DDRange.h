/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DOMNode;

@interface DDRange : NSObject {

	DOMNode* _node;
	long long _startOffset;
	long long _endOffset;

}

@property (nonatomic,retain) DOMNode * node;                     //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) long long startOffset;              //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) long long endOffset;                //@synthesize endOffset=_endOffset - In the implementation block
+(id)rangeWithDOMRange:(id)arg1 ;
-(void)setEndOffset:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(DOMNode *)node;
-(void)setNode:(DOMNode *)arg1 ;
-(long long)startOffset;
-(id)initWithDOMRange:(id)arg1 ;
-(long long)endOffset;
-(void)setStartOffset:(long long)arg1 ;
@end

