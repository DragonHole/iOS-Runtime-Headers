/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationWorkspace;

@interface TUApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _applicationWorkspace;

}

@property (nonatomic,readonly) LSApplicationWorkspace * applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
+(id)shared;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(LSApplicationWorkspace *)applicationWorkspace;
-(void)openSenstiveURL:(id)arg1 options:(id)arg2 ;
@end

