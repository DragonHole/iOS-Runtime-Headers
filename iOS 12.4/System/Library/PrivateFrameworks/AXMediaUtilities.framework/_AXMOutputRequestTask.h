/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMTask.h>

@class AXMOutputRequest, AXMOutputRequestDispatchOptions;

@interface _AXMOutputRequestTask : AXMTask {

	AXMOutputRequest* _request;
	AXMOutputRequestDispatchOptions* _options;

}

@property (nonatomic,retain) AXMOutputRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AXMOutputRequestDispatchOptions * options;              //@synthesize options=_options - In the implementation block
-(void)setRequest:(AXMOutputRequest *)arg1 ;
-(AXMOutputRequestDispatchOptions *)options;
-(void)setOptions:(AXMOutputRequestDispatchOptions *)arg1 ;
-(AXMOutputRequest *)request;
@end
