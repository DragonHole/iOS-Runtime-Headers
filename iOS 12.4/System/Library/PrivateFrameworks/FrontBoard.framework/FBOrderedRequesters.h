/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBOrderedRequesters : NSObject {

	NSMutableArray* _bands[4];

}
-(void)removeRequester:(id)arg1 ;
-(id)requesters;
-(BOOL)containsRequester:(id)arg1 inBand:(int)arg2 ;
-(void)addRequester:(id)arg1 toBand:(int)arg2 ;
-(void)prioritizeRequester:(id)arg1 ;
-(id)highestPriorityRequester;
-(id)lowestPriorityRequester;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)init;
-(id)description;
@end

