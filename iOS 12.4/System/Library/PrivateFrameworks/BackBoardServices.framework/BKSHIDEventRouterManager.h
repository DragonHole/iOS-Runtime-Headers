/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventRouterManagerBase.h>

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase {

	BOOL _needsFlush;

}

@property (assign,nonatomic) BOOL needsFlush;              //@synthesize needsFlush=_needsFlush - In the implementation block
+(id)sharedInstance;
-(void)_routerUpdated:(id)arg1 ;
-(void)setEventRouters:(id)arg1 ;
-(void)_flushTrigger;
-(BOOL)needsFlush;
-(void)setNeedsFlush:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_flush;
@end

