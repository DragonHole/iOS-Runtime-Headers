/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SearchToSharePredictionsInternals/SearchToSharePredictionsInternals-Structs.h>
@interface SGQPWordBoundaries : NSObject {

	vector<bool, std::__1::allocator<bool> >* _left;
	vector<bool, std::__1::allocator<bool> >* _right;

}
-(BOOL)isWordAnchored:(NSRange)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)description;
@end

