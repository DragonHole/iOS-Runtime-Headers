/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/MTDictionaryDiff.h>

@class NSUserDefaults;

@interface MTDefaultsChangeNotifier : MTDictionaryDiff {

	BOOL _running;
	NSUserDefaults* _defaults;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;              //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;                  //@synthesize defaults=_defaults - In the implementation block
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isRunning;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(id)initWithProperties:(id)arg1 defaults:(id)arg2 ;
-(void)_defaultsChanged;
@end

