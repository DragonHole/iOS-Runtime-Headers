/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSURLSessionTaskMetrics, NSString;

@interface VaryHeaderSupportTaskDelegate : NSObject <NSURLSessionTaskDelegate> {

	NSURLSessionTaskMetrics* _metrics;

}

@property (nonatomic,retain) NSURLSessionTaskMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSURLSessionTaskMetrics *)metrics;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)setMetrics:(NSURLSessionTaskMetrics *)arg1 ;
@end
