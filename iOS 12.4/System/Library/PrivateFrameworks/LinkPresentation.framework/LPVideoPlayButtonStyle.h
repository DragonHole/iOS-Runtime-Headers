/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPSize;

@interface LPVideoPlayButtonStyle : NSObject {

	LPSize* _size;
	LPSize* _backgroundSize;
	double _disabledOpacity;

}

@property (nonatomic,retain) LPSize * size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) LPSize * backgroundSize;              //@synthesize backgroundSize=_backgroundSize - In the implementation block
@property (assign,nonatomic) double disabledOpacity;               //@synthesize disabledOpacity=_disabledOpacity - In the implementation block
-(double)disabledOpacity;
-(void)setBackgroundSize:(LPSize *)arg1 ;
-(void)setDisabledOpacity:(double)arg1 ;
-(LPSize *)size;
-(id)init;
-(LPSize *)backgroundSize;
-(void)setSize:(LPSize *)arg1 ;
@end

