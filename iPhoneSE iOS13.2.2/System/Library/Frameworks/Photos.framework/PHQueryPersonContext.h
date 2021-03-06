/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {

	PHFetchOptions* _fetchOptions;

}
+(id)subpredicatesForFetchOptions:(id)arg1 ;
-(id)subpredicates;
-(id)initWithFetchOptions:(id)arg1 ;
-(id)_verifiedPredicate;
-(id)_verifiedVisiblePredicate;
-(id)_notVerifiedPredicate;
-(id)_faceCountPredicateWithMinimum:(unsigned long long)arg1 ;
-(id)_notHiddenTypePredicate;
-(id)personContextNonePredicates;
-(id)personContextPeopleHomePredicate;
-(id)personContextAdditionalPredicate;
-(id)personContextDetailPredicate;
-(id)personContextOneUpPredicate;
@end

