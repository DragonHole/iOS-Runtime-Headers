/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFImage.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface MKSearchFoundationImage : SFImage {

	NSObject*<OS_dispatch_group> _group;

}
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initIconWithSize:(unsigned long long)arg1 mapItem:(id)arg2 ;
@end

