/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXServer.h>

@interface AXVoiceOverServer : AXServer
+(id)server;
-(BOOL)_connectIfNecessary;
-(id)_serviceName;
-(id)lastSpokenPhrases;
-(id)lastSoundsPlayed;
-(id)currentRotorName;
-(id)lastScreenChange;
-(id)currentFocusedElement;
-(BOOL)triggerCommand:(long long)arg1 ;
-(BOOL)triggerCommand:(long long)arg1 withArgument:(id)arg2 ;
-(BOOL)isBrailleInputUIShowing;
@end

