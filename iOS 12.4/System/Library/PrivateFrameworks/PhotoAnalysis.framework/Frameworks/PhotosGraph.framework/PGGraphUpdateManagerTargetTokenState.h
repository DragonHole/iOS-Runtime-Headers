/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHPersistentChangeToken;

@interface PGGraphUpdateManagerTargetTokenState : NSObject {

	BOOL _encounteredTargetToken;
	PHPersistentChangeToken* _changeToken;

}

@property (nonatomic,readonly) PHPersistentChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (assign,nonatomic) BOOL encounteredTargetToken;                          //@synthesize encounteredTargetToken=_encounteredTargetToken - In the implementation block
-(PHPersistentChangeToken *)changeToken;
-(BOOL)encounteredTargetToken;
-(id)initWithPersistentChangeToken:(id)arg1 ;
-(void)setEncounteredTargetToken:(BOOL)arg1 ;
-(id)description;
@end

