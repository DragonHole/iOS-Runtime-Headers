/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SidecarCore/SidecarItem.h>

@class NSMutableData;

@interface SidecarMutableItem : SidecarItem {

	NSMutableData* _mutableData;
	unsigned long long _capacity;
	unsigned _complete : 1;

}

@property (getter=isComplete,readonly) BOOL complete; 
-(id)data;
-(BOOL)appendData:(id)arg1 ;
-(BOOL)isComplete;
-(id)initWithType:(id)arg1 capacity:(unsigned long long)arg2 ;
@end

