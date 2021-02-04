/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraEnvironment;

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation {

	void* _mecabraCandidate;
	BOOL _partialCandidate;
	TIMecabraEnvironment* _mecabraEnvironment;

}

@property (nonatomic,retain) TIMecabraEnvironment * mecabraEnvironment;                    //@synthesize mecabraEnvironment=_mecabraEnvironment - In the implementation block
@property (assign,getter=isPartialCandidate,nonatomic) BOOL partialCandidate;              //@synthesize partialCandidate=_partialCandidate - In the implementation block
-(id)initWithWordSearch:(id)arg1 mecabraCandidate:(void*)arg2 isPartial:(BOOL)arg3 ;
-(TIMecabraEnvironment *)mecabraEnvironment;
-(void)setMecabraEnvironment:(TIMecabraEnvironment *)arg1 ;
-(BOOL)isPartialCandidate;
-(void)setPartialCandidate:(BOOL)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)perform;
@end
