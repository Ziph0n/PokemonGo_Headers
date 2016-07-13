/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <pokemongo/pokemongo-Structs.h>
@class GTMOAuth2Authentication, NSURL, NSDictionary, GTMSessionFetcher, NSTimer;

@interface GTMOAuth2SignIn : NSObject {

	GTMOAuth2Authentication* auth_;
	NSURL* authorizationURL_;
	NSDictionary* additionalAuthorizationParameters_;
	id delegate_;
	SEL webRequestSelector_;
	SEL finishedSelector_;
	BOOL hasHandledCallback_;
	GTMSessionFetcher* pendingFetcher_;
	BOOL shouldFetchGoogleUserEmail_;
	BOOL shouldFetchGoogleUserProfile_;
	NSDictionary* userProfile_;
	SCNetworkReachabilityRef reachabilityRef_;
	NSTimer* networkLossTimer_;
	double networkLossTimeoutInterval_;
	BOOL hasNotifiedNetworkLoss_;
	id userData_;

}

@property (assign) BOOL hasHandledCallback; 
@property (retain) GTMSessionFetcher * pendingFetcher; 
@property (nonatomic,retain) NSDictionary * userProfile; 
@property (nonatomic,retain) GTMOAuth2Authentication * authentication; 
@property (nonatomic,retain) NSURL * authorizationURL; 
@property (nonatomic,retain) NSDictionary * additionalAuthorizationParameters; 
@property (nonatomic,retain) id delegate; 
@property (assign,nonatomic) SEL webRequestSelector; 
@property (assign,nonatomic) SEL finishedSelector; 
@property (nonatomic,retain) id userData; 
@property (assign,nonatomic) BOOL shouldFetchGoogleUserEmail; 
@property (assign,nonatomic) BOOL shouldFetchGoogleUserProfile; 
@property (assign,nonatomic) double networkLossTimeoutInterval; 
+(id)nativeClientRedirectURI;
+(id)googleTokenURL;
+(id)mutableURLRequestWithURL:(id)arg1 paramString:(id)arg2 ;
+(id)googleUserInfoURL;
+(id)decodeWebSafeBase64:(id)arg1 ;
+(id)userInfoFetcherWithAuth:(id)arg1 ;
+(id)googleRevocationURL;
+(id)googleAuthorizationURL;
+(id)standardGoogleAuthenticationForScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 ;
+(void)revokeTokenForGoogleAuthentication:(id)arg1 ;
-(GTMOAuth2Authentication *)authentication;
-(BOOL)shouldFetchGoogleUserEmail;
-(BOOL)shouldFetchGoogleUserProfile;
-(void)stopReachabilityCheck;
-(GTMSessionFetcher *)pendingFetcher;
-(void)setPendingFetcher:(GTMSessionFetcher *)arg1 ;
-(void)closeTheWindow;
-(void)addScopeForGoogleUserInfo;
-(BOOL)startWebRequest;
-(id)parametersForWebRequest;
-(NSDictionary *)additionalAuthorizationParameters;
-(NSURL *)authorizationURL;
-(SEL)webRequestSelector;
-(void)startReachabilityCheck;
-(void)invokeFinalCallbackWithError:(id)arg1 ;
-(BOOL)hasHandledCallback;
-(void)authCodeObtained;
-(void)setHasHandledCallback:(BOOL)arg1 ;
-(void)auth:(id)arg1 finishedWithFetcher:(id)arg2 error:(id)arg3 ;
-(void)finishSignInWithError:(id)arg1 ;
-(void)fetchGoogleUserInfo;
-(void)updateGoogleUserInfoWithData:(id)arg1 ;
-(void)infoFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3 ;
-(void)setUserProfile:(NSDictionary *)arg1 ;
-(void)destroyUnreachabilityTimer;
-(void)reachabilityTimerFired:(id)arg1 ;
-(id)initWithAuthentication:(id)arg1 authorizationURL:(id)arg2 delegate:(id)arg3 webRequestSelector:(SEL)arg4 finishedSelector:(SEL)arg5 ;
-(void)cancelSigningIn;
-(BOOL)startSigningIn;
-(void)windowWasClosed;
-(BOOL)requestRedirectedToRequest:(id)arg1 ;
-(BOOL)titleChanged:(id)arg1 ;
-(BOOL)cookiesChanged:(id)arg1 ;
-(BOOL)loadFailedWithError:(id)arg1 ;
-(void)reachabilityTarget:(SCNetworkReachabilityRef)arg1 changedFlags:(unsigned)arg2 ;
-(void)setAuthentication:(GTMOAuth2Authentication *)arg1 ;
-(void)setAuthorizationURL:(NSURL *)arg1 ;
-(void)setAdditionalAuthorizationParameters:(NSDictionary *)arg1 ;
-(void)setWebRequestSelector:(SEL)arg1 ;
-(SEL)finishedSelector;
-(void)setFinishedSelector:(SEL)arg1 ;
-(void)setShouldFetchGoogleUserEmail:(BOOL)arg1 ;
-(void)setShouldFetchGoogleUserProfile:(BOOL)arg1 ;
-(double)networkLossTimeoutInterval;
-(void)setNetworkLossTimeoutInterval:(double)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(NSDictionary *)userProfile;
@end
