/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AKURLRequestApprover : NSObject {

	NSArray* _whiteListedPaths;

}
-(id)initWithWhitelistedPaths:(id)arg1 ;
-(BOOL)shouldAllowRequest:(id)arg1 ;
-(BOOL)_matchInputAgainstPaths:(id)arg1 ;
@end
