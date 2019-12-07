/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CVABackgroundRequest.h>

@class CVAMattingRequest, NSString;

@interface CVABackgroundRequestImplBase : NSObject <CVABackgroundRequest> {

	CVAMattingRequest* _mattingRequest;

}

@property (retain) CVAMattingRequest * mattingRequest;              //@synthesize mattingRequest=_mattingRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVAMattingRequest *)mattingRequest;
-(void)setMattingRequest:(CVAMattingRequest *)arg1 ;
@end
