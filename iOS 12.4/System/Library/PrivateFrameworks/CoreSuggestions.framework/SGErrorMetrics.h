/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMBadInteractionIgnored;

@interface SGErrorMetrics : NSObject {

	SGMBadInteractionIgnored* _badInteractionIgnored;

}

@property (nonatomic,retain) SGMBadInteractionIgnored * badInteractionIgnored;              //@synthesize badInteractionIgnored=_badInteractionIgnored - In the implementation block
+(id)instance;
+(void)recordInteractionIgnoredWithReason:(SGMInteractionIgnoredReason_)arg1 ;
-(SGMBadInteractionIgnored *)badInteractionIgnored;
-(void)setBadInteractionIgnored:(SGMBadInteractionIgnored *)arg1 ;
-(id)init;
@end

