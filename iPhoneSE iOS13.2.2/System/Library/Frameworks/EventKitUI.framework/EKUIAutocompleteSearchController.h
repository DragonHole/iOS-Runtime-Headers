/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKUIAutocompleteSearchController : NSObject {

	unsigned long long _maximumResultCount;

}

@property (assign) unsigned long long maximumResultCount;              //@synthesize maximumResultCount=_maximumResultCount - In the implementation block
+(id)searchWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)maximumResultCount;
-(void)setMaximumResultCount:(unsigned long long)arg1 ;
@end

