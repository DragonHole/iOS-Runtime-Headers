/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAppStateMonitor.h>

@interface NewsArticles.ArticleViewerAppStateMonitor : NSObject <SXAppStateMonitor> {

	 onForegroundClosures;
	 onEnterBackgroundClosures;
	 onWindowForegroundClosures;
	 onWindowBackgroundClosures;

}
-(void)performOnApplicationDidEnterBackground:(/*^block*/id)arg1 ;
-(void)performOnApplicationDidBecomeActive:(/*^block*/id)arg1 ;
-(void)performOnApplicationWillEnterForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationWindowDidBecomeForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationWindowDidBecomeBackground:(/*^block*/id)arg1 ;
-(id)init;
@end

