/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface HFChildServiceFilter : NSObject {

	NSSet* _childServiceTypes;

}

@property (nonatomic,copy,readonly) NSSet * childServiceTypes;              //@synthesize childServiceTypes=_childServiceTypes - In the implementation block
-(id)initWithChildServiceTypes:(id)arg1 ;
-(NSSet *)childServiceTypes;
-(id)filteredChildServicesForParentService:(id)arg1 ;
@end

