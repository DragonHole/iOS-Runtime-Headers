/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LPMetadataProviderSpecializationDelegate;
@class LPMetadataProviderSpecializationContext, NSURL;

@interface LPMetadataProviderSpecialization : NSObject {

	id<LPMetadataProviderSpecializationDelegate> _delegate;
	LPMetadataProviderSpecializationContext* _context;

}

@property (assign,nonatomic,__weak) id<LPMetadataProviderSpecializationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) LPMetadataProviderSpecializationContext * context;                       //@synthesize context=_context - In the implementation block
+(unsigned long long)specialization;
+(id)specializedMetadataProviderForResourceWithContext:(id)arg1 ;
+(BOOL)generateSpecializedMetadataForCompleteMetadata:(id)arg1 withContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
+(id)specializedMetadataProviderForMetadata:(id)arg1 withContext:(id)arg2 ;
-(id<LPMetadataProviderSpecializationDelegate>)delegate;
-(void)setDelegate:(id<LPMetadataProviderSpecializationDelegate>)arg1 ;
-(void)cancel;
-(void)start;
-(LPMetadataProviderSpecializationContext *)context;
-(NSURL *)URL;
-(id)initWithContext:(id)arg1 ;
@end
