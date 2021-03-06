/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXDOMModificationContextFactory.h>

@protocol SXDOMModificationContextFactory <NSObject>
@required
-(id)createModificationContextWithLayoutOptions:(id)arg1;

@end


@protocol SXDocumentProviding;
@class NSString;

@interface SXDOMModificationContextFactory : NSObject <SXDOMModificationContextFactory> {

	id<SXDocumentProviding> _documentProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;              //@synthesize documentProvider=_documentProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDocumentProviding>)documentProvider;
-(id)createModificationContextWithLayoutOptions:(id)arg1 ;
-(id)initWithDocumentProvider:(id)arg1 ;
@end

