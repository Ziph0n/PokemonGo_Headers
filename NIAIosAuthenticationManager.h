/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GTMOAuth2Authentication, NSString, GTMSessionFetcherService;

@interface NIAIosAuthenticationManager : NSObject {

	GTMOAuth2Authentication* _auth;
	NSString* _clientAuthToken;
	GTMSessionFetcherService* _fetcherService;

}
-(void)getAccountOrLogin:(id)arg1 clientSecret:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearAuth;
-(void)refreshIdTokenWithCompletion:(/*^block*/id)arg1 ;
-(id)defaultSourceString;
-(id)init;
-(id)description;
-(id)navigationController;
-(id)userEmail;
@end

